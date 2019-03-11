#include <iostream>
#include<map>
#include<string>
#include<sstream>
#include<fstream>
#include<cmath>


using namespace std;

// data
double group [4][2] = {{1.0, 1.1}, {1.0, 1.0}, {0, 0}, {0, 0.1}};
string labels[4] = {"A", "A", "B", "B"};

// Knn
// inx: 未分类的的输入数据，DateSet: 样本集，label: 标签，k:k值，size: 数据的特征数量
// dataSetSize:样本集数量
string classify(double * inX, double * dateSet, string label[], int k,
                int size, int dataSetSize)
{
    double sum = 0;
    double * diff_array = new double[size];
    double * diff_all = new double[dataSetSize];
    int * sorted_index = new int[dataSetSize];
    string result;
    map<string, int> label_count;

    // calculate the L2 distance and store in diff_array
    for (int i = 0; i < dataSetSize; i++)
    {
        sum = 0;
        for (int j = 0; j < size; j++)
        {
            diff_array[j] = *(inX + j) - *(dateSet + i * size + j);
            sum += (diff_array[j] * diff_array[j]);
        }
        diff_all[i] = sqrt(sum);
    }
    return 0;
}


int main()
{
    string result;
    string line;
    double point[2];
    cout << "Please enter the coordinate of the pixel" << endl;
    getline(cin, line);


    istringstream record(line);
    record >> point[0];
    record >> point[1];

    result = classify(point, &group[0][0], labels, 3, 2, 4)
    cout << "The result is: " << result << endl;
    return 0;

}
