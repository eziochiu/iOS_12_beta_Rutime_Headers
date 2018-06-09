/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBagBackend : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _bagValuesDictionary;
    SSDoubleLinkedList * _bagValuesList;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableDictionary *bagValuesDictionary;
@property (nonatomic, retain) SSDoubleLinkedList *bagValuesList;

+ (bool)_bagValue:(id)arg1 equalsBagValue:(id)arg2;

- (void).cxx_destruct;
- (id)_bagValuesMapTableWithInitialValues:(id)arg1;
- (id)_valueForKey:(id)arg1 forBagValuesNode:(id)arg2;
- (id)accessQueue;
- (void)addBagValues:(id)arg1 forBagWithKey:(id)arg2;
- (id)bagValuesDictionary;
- (id)bagValuesList;
- (id)deltaDictionaryRepresentationForBagWithKey:(id)arg1;
- (id)description;
- (id)diagnostics;
- (id)dictionaryRepresentationForBagWithKey:(id)arg1;
- (id)init;
- (void)removeBagValuesForBagWithKey:(id)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setBagValuesDictionary:(id)arg1;
- (void)setBagValuesList:(id)arg1;
- (id)valueForKey:(id)arg1 forBagWithKey:(id)arg2;

@end
