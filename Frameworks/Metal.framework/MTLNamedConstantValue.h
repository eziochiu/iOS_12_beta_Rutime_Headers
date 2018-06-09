/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLNamedConstantValue : NSObject {
    char * _data;
    unsigned long long  _dataType;
    NSString * _name;
}

@property (readonly) void*data;
@property (readonly) unsigned long long dataType;
@property (readonly) NSString *name;

- (void*)data;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)describe;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 name:(id)arg3;
- (id)name;

@end
