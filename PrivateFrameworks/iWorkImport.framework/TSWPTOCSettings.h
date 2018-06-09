/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset, TSSStyleClient> {
    NSString * _displayName;
    TSURetainedPointerKeyDictionary * _map;
    int  _scope;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *indexedStyles;
@property (nonatomic, retain) TSURetainedPointerKeyDictionary *map;
@property (nonatomic, readonly) NSSet *paragraphStylesShownInTOC;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic) int scope;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2;
- (void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2 showInTOC:(bool)arg3;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyUsingDeepCopy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)entryStyleForParagraphStyle:(id)arg1;
- (id)indexedStyles;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct TOCSettingsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<TSWP::TOCSettingsArchive_TOCEntryData> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)map;
- (void)p_upgradeStyle:(id)arg1 withStylesheet:(id)arg2;
- (id)paragraphStylesShownInTOC;
- (id)presetKind;
- (id)referencedStyles;
- (void)removeIndexedStyle:(id)arg1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)saveToArchive:(struct TOCSettingsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<TSWP::TOCSettingsArchive_TOCEntryData> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (int)scope;
- (void)setDisplayName:(id)arg1;
- (void)setMap:(id)arg1;
- (void)setScope:(int)arg1;
- (bool)showInTOCForParagraphStyle:(id)arg1;
- (void)upgradeWithStylesheet:(id)arg1;

@end
