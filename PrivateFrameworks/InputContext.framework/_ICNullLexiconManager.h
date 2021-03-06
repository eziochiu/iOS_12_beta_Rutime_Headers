/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray * _contactObservers;
}

- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (void)hibernate;
- (id)init;
- (id)loadLexicons:(id /* block */)arg1;
- (id)loadLexiconsUsingFilter:(id /* block */)arg1;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)unloadLexicons;
- (void)warmUp;

@end
