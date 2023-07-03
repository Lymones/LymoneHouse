T = input('Enter the number of test cases: ');
for x = 1:T
    I = input('Enter the value of I: ', 's');
    P = input('Enter the value of P: ', 's');
    fprintf('Case #%d: ', x);
    p = 1;
    for i = 1:length(P)
        if P(i) == I(p)
            p = p + 1;
        end
        if p > length(I)
            break;
        end
    end
    if p > length(I)
        fprintf('%d\n', length(P) - length(I));
    else
        fprintf('IMPOSSIBLE\n');
    end
end
