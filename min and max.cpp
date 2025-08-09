//Dev Darji
//24070123033
//ENTC-A2

for(int i = 1; i < size; i++) {
        if(array[i] < min)
            min = array[i];
        if(array[i] > max)
            max = array[i];
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
