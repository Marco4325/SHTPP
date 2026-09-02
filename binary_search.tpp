inteiro busca_binaria(array[], inteiro: n, inteiro: x)
    inteiro: low
    inteiro: high

    low := 0
    high := n - 1

    repita
        inteiro: mid
        mid := low + (high - low) / 2

        se arr[mid] = x então
            retorna(mid)
        fim

        se arr[mid] < x então
            low := mid + 1

        senão
            high := mid - 1
        fim

    até low > high

    retorna(-1)
fim