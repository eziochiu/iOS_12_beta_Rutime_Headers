/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLSparseMatrix : NSObject {
    bool  _isSymmetric;
    struct sparse_m_float { } * _matrix;
}

@property (nonatomic) bool isSymmetric;
@property (nonatomic) struct sparse_m_float { }*matrix;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;

+ (id)sparseMatrixFromNumbers:(id)arg1;
+ (id)sparseMatrixWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2;

- (void)_enumerateSparseRowsWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)enumerateNonZeroValuesForRow:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithSparseMatrix:(struct sparse_m_float { }*)arg1;
- (bool)isSymmetric;
- (struct sparse_m_float { }*)matrix;
- (id)matrixWithConstantColumn;
- (float)maxValue;
- (float)minValue;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (void)setIsSymmetric:(bool)arg1;
- (void)setMatrix:(struct sparse_m_float { }*)arg1;
- (float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end
