%%time
import matplotlib.pyplot as plt
from matplotlib.pyplot import figure
from networkx import nx
import random as rd

n=int(input())#количество вершин
'''
arr = [[0] * n for i in range(n)]
for i in range(n):
    for j in range(i+1,n):
        print("Введите",i,j)
        arr[i][j]=int(input())
        arr[j][i]=arr[i][j]'''
#ручной ввода графа

arr = [[0] * n for i in range(n)]
for i in range(n):
    for j in range(i+1,n):
        arr[i][j]=rd.randint(-1,100)
        arr[j][i]=arr[i][j]
#генератор графа

G=nx.Graph()#объект граф из модуля networkx

l,e,c,z=[i for i in range(n)],[],0,0
for i in range(n):
    for j in range(i+1,n):
        if arr[i][j]>0:
            c=j
            z=i
            e.append((z,c,{'weight':arr[i][j]}))
#из м-цы весов забираем ребра,добавляем на них вес и заносим ребра в список e
            
def visual(l,e,boolean):#визуализация графа , boolean==0 для начального графа и boolean==1 для итогового
    if boolean==1:
        figure(num=None, figsize=(10, 10), dpi=50, facecolor='w', edgecolor='k')
    else:
        figure(num=None, figsize=(35, 35), dpi=50, facecolor='w', edgecolor='k')
    G.add_nodes_from(l)
    G.add_edges_from(e)
    if boolean==1:
        pos=nx.spring_layout(G)
    else:
        pos=nx.shell_layout(G)
    nx.draw_networkx_nodes(G,pos,node_size=200)

    nx.draw_networkx_edges(G,pos,edgelist=e,width=1)

    nx.draw_networkx_labels(G,pos,font_size=10,font_family='sans-serif')

    labels = nx.get_edge_attributes(G,'weight')

    nx.draw_networkx_edge_labels(G,pos,edge_labels=labels)

    plt.axis('off')
    if boolean==1:
        plt.savefig('2.png')
    else:
        plt.savefig('1.png')
    #plt.show() листинг графа
visual(l,e,0)

G=nx.Graph()

l1=[i for i in range(1,len(arr))]#создаем список вершин , которые должны быть включены в покрывающее дерево(все)
l,w,e=[0],[],[]
def minel(i):#алгоритм Прима
        m=min(arr[i])
        for t,d in enumerate(l):
            for c,k in enumerate(arr[d]):
                    if k>0 and k>m and c not in l:
                        m=k
                        mi=c
                        a=c
                        b=l[t]
        w.append(m)
        try:
            l.append(mi)
        except:
            l.append(arr[i].index(m))
        e.append((b,a,{'weight':w[-1]}))
        visual(l,e,1)
for i in l1:
    minel(i)
print('Сумма: ',sum(w),e)#выводим сумму и ребра с их весами
