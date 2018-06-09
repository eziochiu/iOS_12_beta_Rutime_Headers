/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLElementAttribute : NSObject {
    NSString * _name;
    NSString * _nameSpace;
    NSString * _value;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameSpace;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)name;
- (id)nameSpace;
- (void)setName:(id)arg1;
- (void)setNameSpace:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
