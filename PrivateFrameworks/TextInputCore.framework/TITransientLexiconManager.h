/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITransientLexiconManager : NSObject <TITransientLexiconManaging> {
    bool  _lexiconsLoaded;
    struct _LXLexicon { } * _namedEntityLexiconRef;
    struct _LXLexicon { } * _namedEntityPhraseLexiconRef;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const struct _LXLexicon { }*namedEntityLexicon;
@property (nonatomic, readonly) const struct _LXLexicon { }*namedEntityPhraseLexicon;
@property (readonly) Class superclass;

+ (id)getEntries:(struct _LXLexicon { }*)arg1;
+ (void)setSharedTITransientLexiconManager:(id)arg1;
+ (id)sharedInstance;
+ (id)singletonInstance;

- (id /* block */)addContactObserver:(id /* block */)arg1;
- (void)dealloc;
- (void)debugLogEntities;
- (void)getOnce:(id /* block */)arg1;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (id)init;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)loadLexicons;
- (const struct _LXLexicon { }*)namedEntityLexicon;
- (const struct _LXLexicon { }*)namedEntityPhraseLexicon;
- (void)removeContactObserver:(id /* block */)arg1;
- (bool)searchForWord:(id)arg1;
- (bool)searchForWordCaseInsensitive:(id)arg1;
- (bool)searchHelper:(struct _LXLexicon { }*)arg1 forWord:(struct __CFString { }*)arg2 caseSensitive:(bool)arg3;

@end
