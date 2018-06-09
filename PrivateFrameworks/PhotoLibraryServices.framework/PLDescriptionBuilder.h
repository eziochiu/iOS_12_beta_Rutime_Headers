/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDescriptionBuilder : NSObject {
    NSMutableString * _description;
    long long  _indent;
    NSString * _indentString;
    NSObject * _object;
    NSString * _separator;
    _PLDescriptionStyle * _style;
}

@property (nonatomic, copy) NSString *separator;

+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)plainDescriptionBuilder;
+ (id)plainMultiLineDescriptionBuilder;
+ (id)prettyMultiLineDescriptionBuilderWithObject:(id)arg1 indent:(long long)arg2;

- (void)appendName:(id)arg1 boolValue:(bool)arg2;
- (void)appendName:(id)arg1 cgSize:(struct CGSize { double x1; double x2; })arg2;
- (void)appendName:(id)arg1 doubleValue:(double)arg2;
- (void)appendName:(id)arg1 floatValue:(float)arg2;
- (void)appendName:(id)arg1 integerValue:(long long)arg2;
- (void)appendName:(id)arg1 object:(id)arg2;
- (void)appendName:(id)arg1 typeCode:(const char *)arg2 value:(const void*)arg3;
- (void)appendName:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;
- (id)build;
- (void)dealloc;
- (id)initWithObject:(id)arg1 style:(long long)arg2 indent:(long long)arg3;
- (id)separator;
- (void)setSeparator:(id)arg1;

@end
