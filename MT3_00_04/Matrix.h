#pragma once
#include "Vector3.h"
/// <summary>
/// 4x4の行列
/// </summary>
struct Matrix4x4 {
	float m[4][4];
};

// 行列の加法
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
// 行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
// 行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
// 逆行列
Matrix4x4 Inverse(const Matrix4x4& m);
// 転置行列
Matrix4x4 Transpose(const Matrix4x4& m);
// 単位行列の作成
Matrix4x4 MakeIdentiy4x4();
// 行列の描画
void MatrixScreenPrintf(int posX, int posY, const Matrix4x4& matrix, const char* label);
// 平行移動行列
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);
// 拡大縮小行列
Matrix4x4 MakeScaleMatrix(const Vector3& scale);
// X軸回転行列
Matrix4x4 MakeRotateXMatrix(float radiun);
// Y軸回転行列
Matrix4x4 MakeRotateYMatrix(float radiun);
// Y軸回転行列
Matrix4x4 MakeRotateZMatrix(float radiun);
// 座標変換
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);