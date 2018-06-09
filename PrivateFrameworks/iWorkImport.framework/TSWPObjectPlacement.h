/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPObjectPlacement : NSObject {
    int  _index;
    NSObject * _object;
    TSUUUIDPath * _uuidPath;
}

@property (nonatomic) int index;
@property (nonatomic, retain) NSObject *object;
@property (nonatomic, retain) TSUUUIDPath *uuidPath;

+ (id)objectPlacementWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;

- (void).cxx_destruct;
- (int)index;
- (id)initWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;
- (id)object;
- (void)setIndex:(int)arg1;
- (void)setObject:(id)arg1;
- (void)setUuidPath:(id)arg1;
- (id)uuidPath;

@end
