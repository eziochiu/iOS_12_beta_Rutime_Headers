/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPaginatedPageInfo : TPPageInfo

@property (nonatomic, readonly) TPDrawablesZOrder *drawablesZOrder;
@property (nonatomic, readonly) NSArray *floatingDrawableInfos;
@property (nonatomic, readonly) bool isDocumentSetupPage;

- (id)drawablesZOrder;
- (id)floatingDrawableInfos;
- (bool)isDocumentSetupPage;
- (Class)layoutClass;
- (id)orderedDrawables:(id)arg1;
- (id)pageController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageFrame;
- (Class)repClass;

@end
