#단어정렬 https://www.acmicpc.net/problem/1181

'''
# 문제
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

   1. 길이가 짧은 것부터
   2. 길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.

#입력
첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 
둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 
주어지는 문자열의 길이는 50을 넘지 않는다.
'''

import sys
import os

# [1] 마법의 세 줄: 현재 파일 위치를 자동으로 찾아서 input.txt를 연결합니다.
file_path = os.path.join(os.path.dirname(__file__), "input.txt")
if os.path.exists(file_path):
    sys.stdin = open(file_path, "r")

input_data = sys.stdin.read().split()

words = list(set(input_data[1:]))

words.sort(key=lambda x: (len(x), x))

print('\n'.join(words))

'''
처음에는 아스키코드를 활용해서 크기비교를 하려고 했는데 한 문자당 두자리를 차지해서 튜플을 활용하는 방법으로 전환
익명함수 lambda
   lambda 매개변수 : 표현식  형태로 작성
   
sort 함수는 리스트 안에 있는 데이터를 하나씩 확인하며 정렬을 수행하기 때문에 
key에 함수가 지정된 경우 리스트에서 요소를 하나 꺼내 함수의 매개변수로 넘긴다
'''