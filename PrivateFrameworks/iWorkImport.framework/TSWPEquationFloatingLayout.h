/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPEquationFloatingLayout : TSWPEquationLayout {
    TSDInfoGeometry * _baseEquationLayoutGeometry;
    TSDInfoGeometry * _dynamicInfoGeometry;
}

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)currentInfoGeometry;
- (id)layoutGeometryFromInfo;

@end
