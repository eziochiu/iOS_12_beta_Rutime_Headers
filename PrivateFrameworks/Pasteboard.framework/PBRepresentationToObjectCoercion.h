/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBRepresentationToObjectCoercion : NSObject {
    NSMutableDictionary * _blockByType;
    Class  _theClass;
    NSMutableOrderedSet * _typeOrder;
}

@property (nonatomic, retain) NSMutableDictionary *blockByType;
@property (nonatomic, retain) Class theClass;
@property (nonatomic, retain) NSMutableOrderedSet *typeOrder;

- (void).cxx_destruct;
- (void)addCoercionFromType:(id)arg1 block:(id /* block */)arg2;
- (id)availableImportTypes;
- (id)blockByType;
- (bool)canCoerceFromType:(id)arg1;
- (id)createObjectFromRepresentationConformingToType:(id)arg1 data:(id)arg2 URL:(id)arg3 outError:(id*)arg4;
- (id)initWithClass:(Class)arg1;
- (void)setBlockByType:(id)arg1;
- (void)setTheClass:(Class)arg1;
- (void)setTypeOrder:(id)arg1;
- (Class)theClass;
- (id)typeOrder;

@end
