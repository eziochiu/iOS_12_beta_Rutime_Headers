/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataSpecifier : NSObject <NSCopying> {
    long long  _attribute;
    NSDate * _date;
    int  _functionIndex;
    unsigned long long  _hashVal;
    NSString * _symbol;
    long long  _year;
}

@property (nonatomic, readonly) long long attribute;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) int functionIndex;
@property (nonatomic, readonly) NSString *functionName;
@property (nonatomic, readonly) unsigned long long hashVal;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[10]; int x2; } invalidAttributeErrorValue;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[10]; int x2; } invalidSymbolErrorValue;
@property (nonatomic, readonly) bool isCold;
@property (nonatomic, readonly) bool isCurrency;
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) long long year;

+ (id)specifierFromArchive:(const struct RemoteDataSpecifierArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; unsigned int x6; unsigned int x7; double x8; }*)arg1;
+ (id)specifierWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;

- (void).cxx_destruct;
- (long long)attribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeToArchive:(struct RemoteDataSpecifierArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; unsigned int x6; unsigned int x7; double x8; }*)arg1;
- (int)functionIndex;
- (id)functionName;
- (unsigned long long)hash;
- (unsigned long long)hashVal;
- (id)initFromArchive:(const struct RemoteDataSpecifierArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; unsigned int x6; unsigned int x7; double x8; }*)arg1;
- (id)initWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })invalidAttributeErrorValue;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })invalidSymbolErrorValue;
- (bool)isCold;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (id)symbol;
- (long long)year;

@end
