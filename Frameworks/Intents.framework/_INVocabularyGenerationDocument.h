/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabularyGenerationDocument : NSObject <NSCopying> {
    NSString * _appBundleID;
    bool  _haveAssignedAllSiriIDs;
    NSString * _intentSlot;
    NSMutableDictionary * _itemsBySiriIDCache;
    NSMutableDictionary * _itemsByStringCache;
    bool  _resetOnNextSync;
    NSString * _thisGeneration;
    NSString * _validity;
    NSArray * _vocabularyItems;
}

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic) bool haveAssignedAllSiriIDs;
@property (nonatomic, copy) NSString *intentSlot;
@property (nonatomic) bool resetOnNextSync;
@property (nonatomic, copy) NSString *thisGeneration;
@property (nonatomic, copy) NSString *validity;
@property (nonatomic, copy) NSArray *vocabularyItems;

- (void).cxx_destruct;
- (void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2;
- (void)_clearVocabularyItemCaches;
- (id)_dictionaryRepresentation;
- (id)_everyVocabularyItemSiriID;
- (id)_initWithDictionary:(id)arg1;
- (id)_itemsBySiriID;
- (id)_stringForSelector:(SEL)arg1 from:(id)arg2;
- (void)_takeValuesFromDictionary:(id)arg1;
- (id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3;
- (id)_vocabularyItemForSiriID:(id)arg1;
- (id)_vocabularyItemWithString:(id)arg1;
- (id)appBundleID;
- (void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diffFromPreviousDocument:(id)arg1;
- (bool)haveAssignedAllSiriIDs;
- (id)initWithContentsOfFile:(id)arg1;
- (id)intentSlot;
- (bool)resetOnNextSync;
- (void)setAppBundleID:(id)arg1;
- (void)setHaveAssignedAllSiriIDs:(bool)arg1;
- (void)setIntentSlot:(id)arg1;
- (void)setResetOnNextSync:(bool)arg1;
- (void)setThisGeneration:(id)arg1;
- (void)setValidity:(id)arg1;
- (void)setVocabularyItems:(id)arg1;
- (id)thisGeneration;
- (id)validity;
- (id)vocabularyItems;
- (id)writeToFile:(id)arg1 createIntermediateDirectories:(bool)arg2;

@end
