/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDUserDefinedShapeLibraryCollection : NSObject <TSDShapeCollection> {
    TSDUserDefinedShapeLibrary * _userDefinedShapeLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfShapes;
@property (nonatomic, retain) TSDUserDefinedShapeLibrary *p_userDefinedShapeLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasUserDefinedShapes;
- (id)initWithUserDefinedShapeLibrary:(id)arg1;
- (id)name;
- (unsigned long long)numberOfShapes;
- (id)p_userDefinedShapeLibrary;
- (void)setP_userDefinedShapeLibrary:(id)arg1;
- (id)shapeAtIndex:(unsigned long long)arg1;

@end
