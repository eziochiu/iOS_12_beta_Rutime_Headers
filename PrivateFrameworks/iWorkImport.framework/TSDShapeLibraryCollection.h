/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeLibraryCollection : NSObject <TSDShapeCollection> {
    unsigned long long  _categoryIndex;
    TSDShapeLibrary * _shapeLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfShapes;
@property (nonatomic) unsigned long long p_categoryIndex;
@property (nonatomic, retain) TSDShapeLibrary *p_shapeLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithShapeLibrary:(id)arg1 categoryIndex:(unsigned long long)arg2;
- (id)name;
- (unsigned long long)numberOfShapes;
- (id)p_category;
- (unsigned long long)p_categoryIndex;
- (id)p_shapeLibrary;
- (void)setP_categoryIndex:(unsigned long long)arg1;
- (void)setP_shapeLibrary:(id)arg1;
- (id)shapeAtIndex:(unsigned long long)arg1;

@end
