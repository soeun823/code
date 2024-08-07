def count_words(s):
    # 문자열을 공백을 기준으로 분리
    words = s.split()
    # 분리된 단어 리스트의 길이를 반환
    return len(words)

# 입력을 받습니다.
input_string = input().strip()

# 단어 개수를 세고 결과를 출력합니다.
print(count_words(input_string))
