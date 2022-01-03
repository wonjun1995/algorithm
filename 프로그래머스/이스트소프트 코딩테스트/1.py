def solution (scores) :
    success_cnt = 0

    for score in scores :
        score_list = list(score)
        total_score  = 0
        max_score = 0
        min_score = 100000
        f_cnt = 0
        a_cnt = 0

        for each_score in score_list :
            score_num = 10 - (ord(each_score) - 60)
            total_score += score_num

            if max_score < score_num:
                max_score = score_num

            if min_score > score_num :
                min_score = score_num

            if each_score == 'F':
                f_cnt += 1
            if each_score == 'A':
                a_cnt += 1

            if f_cnt >= 2 :
                break

        if f_cnt < 2 and a_cnt >= 2 :
            success_cnt += 1

        if f_cnt < 2 and a_cnt < 2 :

            avg_score = (total_score - max_score - min_score) / (len(score_list) - 2)

            if avg_score >= 3 :
                success_cnt += 1

    return success_cnt