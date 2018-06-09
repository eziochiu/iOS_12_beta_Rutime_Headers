/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCEntryStyle : TSWPParagraphStyle

+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;

- (id)initWithContext:(id)arg1 name:(id)arg2 basedOnParagraphStyle:(id)arg3;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TOCEntryStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; bool x6; bool x7; }*)arg2 unarchiver:(id)arg3;
- (void)p_saveTOCEntryStylePropertiesToArchive:(struct TOCEntryStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; bool x6; bool x7; }*)arg1 archiver:(id)arg2;
- (id)parentStyleForFixingOrphanVariation;
- (id)presetKind;
- (void)saveToArchive:(struct TOCEntryStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ParagraphStyleArchive {} *x5; struct TOCEntryStylePropertiesArchive {} *x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
