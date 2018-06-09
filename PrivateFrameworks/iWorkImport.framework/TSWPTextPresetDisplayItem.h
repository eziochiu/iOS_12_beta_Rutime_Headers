/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextPresetDisplayItem : NSObject {
    NSString * _displayName;
    TSWPTextStylePreset * _preset;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) TSWPTextStylePreset *preset;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)initWithArchive:(const struct TextPresetDisplayItemArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithPreset:(id)arg1 displayName:(id)arg2;
- (id)preset;
- (void)saveToArchive:(struct TextPresetDisplayItemArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; }*)arg1 archiver:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setPreset:(id)arg1;

@end
