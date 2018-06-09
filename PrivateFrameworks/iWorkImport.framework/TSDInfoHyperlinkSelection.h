/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInfoHyperlinkSelection : TSKSelection {
    NSSet * _infos;
}

@property (nonatomic, readonly) unsigned long long infoCount;
@property (nonatomic, readonly, copy) NSSet *infos;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) unsigned long long unlockedInfoCount;
@property (nonatomic, readonly) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)selectionWithInfos:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)infoCount;
- (id)infos;
- (id)initWithInfos:(id)arg1;
- (bool)isEmpty;
- (unsigned long long)unlockedInfoCount;
- (id)unlockedInfos;

@end
