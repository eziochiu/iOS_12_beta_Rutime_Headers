/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboard : NSObject <TSPDecoder> {
    id  _pasteboard;
}

@property (nonatomic, readonly) NSArray *URLs;
@property (nonatomic, readonly) long long changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSmartCopy;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) unsigned long long pasteboardItemMaxSize;
@property (nonatomic, readonly) NSArray *richTextStrings;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) NSArray *strings;
@property (readonly) Class superclass;

+ (id)activePasteboardForName:(id)arg1;
+ (id)activePasteboards;
+ (id)activePasteboardsQueue;
+ (id)generalPasteboard;
+ (Class)pasteboardClass;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)pasteboardWithPasteboard:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)stylePasteboard;

- (void).cxx_destruct;
- (id)URLs;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1;
- (void)addItems:(id)arg1 isSmartCopy:(bool)arg2;
- (bool)canLoadItemsOfClass:(Class)arg1;
- (long long)changeCount;
- (long long)clearContents;
- (bool)containsAnyPasteboardTypeInArray:(id)arg1;
- (bool)containsImportableRichTextTypes;
- (bool)containsImportableTextTypes;
- (bool)containsNativePasteboardTypes;
- (bool)containsPasteboardTypes:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)description;
- (bool)fromExcelDataSource;
- (bool)fromIWorkSageDataSource;
- (id)importableImageTypes;
- (id)importableRichTextTypes;
- (id)initWithGeneralPasteboard;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithPasteboardName:(id)arg1 create:(bool)arg2;
- (id)initWithUniquePasteboardName;
- (oneway void)invalidate;
- (bool)isSmartCopy;
- (id)name;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (long long)numberOfItems;
- (unsigned long long)pasteboardItemMaxSize;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (id)richTextStrings;
- (void)setString:(id)arg1;
- (id)string;
- (id)stringForPasteboardType:(id)arg1;
- (id)strings;
- (id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
