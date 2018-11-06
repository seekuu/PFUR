import matplotlib.pyplot as plt
from matplotlib.pyplot import figure
from networkx import nx
import random as rd
import time

n=int(input())
'''
arr = [[0] * n for i in range(n)]
for i in range(n):
    for j in range(i+1,n):
        print("Введите",i,j)
        arr[i][j]=int(input())
        arr[j][i]=arr[i][j]'''


arr = [[0] * n for i in range(n)]
for i in range(n):
    for j in range(i+1,n):
        arr[i][j]=rd.randint(-1,100)
        arr[j][i]=arr[i][j]
G=nx.Graph()

l,e,c,z=[i for i in range(n)],[],0,0
for i in range(n):
    for j in range(i+1,n):
        if arr[i][j]>0:
            c=j
            z=i
            e.append((z,c,{'weight':arr[i][j]}))
def visual(l,e):
    figure(num=None, figsize=(10, 10), dpi=50, facecolor='w', edgecolor='k')
    G.add_nodes_from(l)
    G.add_edges_from(e)

    pos=nx.spring_layout(G)

    nx.draw_networkx_nodes(G,pos,node_size=200)

    nx.draw_networkx_edges(G,pos,edgelist=e,width=1)

    nx.draw_networkx_labels(G,pos,font_size=10,font_family='sans-serif')

    labels = nx.get_edge_attributes(G,'weight')

    nx.draw_networkx_edge_labels(G,pos,edge_labels=labels)

    plt.axis('off')
    plt.savefig('2.png')
    plt.show()

def visualn(l,e):
    figure(num=None, figsize=(35, 35), dpi=50, facecolor='w', edgecolor='k')
    G.add_nodes_from(l)
    G.add_edges_from(e)

    pos=nx.shell_layout(G)

    nx.draw_networkx_nodes(G,pos,node_size=500)

    nx.draw_networkx_edges(G,pos,edgelist=e,width=1)

    nx.draw_networkx_labels(G,pos,font_size=20,font_family='sans-serif')

    labels = nx.get_edge_attributes(G,'weight')

    nx.draw_networkx_edge_labels(G,pos,edge_labels=labels)

    plt.axis('off')
    plt.savefig('1.png')
    plt.show()
    
    
visualn(l,e)
G=nx.Graph()
l1=[i for i in range(1,len(arr))]
l,w,e=[0],[],[]
def minel(i):
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
        visual(l,e)
for i in l1:
    minel(i)
print('Сумма: ',sum(w),e)