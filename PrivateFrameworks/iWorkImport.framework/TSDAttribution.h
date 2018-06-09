/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAttribution : TSKSosBase <NSCopying> {
    NSString * _authorName;
    NSString * _authorURLString;
    bool  _definedAuthorName;
    bool  _definedAuthorURLString;
    bool  _definedDescriptionText;
    bool  _definedExternalURLString;
    bool  _definedTitle;
    NSString * _descriptionText;
    NSString * _externalURLString;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *authorName;
@property (nonatomic, readonly) NSURL *authorURL;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSURL *externalURL;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)authorName;
- (id)authorURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionText;
- (id)externalURL;
- (unsigned long long)hash;
- (id)initFromMessage:(const struct Attribution { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 externalURL:(id)arg3 authorName:(id)arg4 authorURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)saveToMessage:(struct Attribution { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; }*)arg1 archiver:(id)arg2;
- (id)title;

@end
