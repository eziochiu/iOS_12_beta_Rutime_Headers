/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFFreeMapEntry : NSObject {
    NSMutableSet * _owners;
    int  _retainCount;
}

- (void)addOwner:(id)arg1;
- (void)dealloc;
- (bool)decrement;
- (id)init;
- (void)removeAllOwners;
- (void)removeOwner:(id)arg1;

@end
