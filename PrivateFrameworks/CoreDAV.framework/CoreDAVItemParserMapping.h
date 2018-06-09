/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItemParserMapping : NSObject {
    NSString * _name;
    NSString * _nameSpace;
    Class  _parseClass;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameSpace;
@property (nonatomic) Class parseClass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;
- (id)name;
- (id)nameSpace;
- (Class)parseClass;
- (void)setName:(id)arg1;
- (void)setNameSpace:(id)arg1;
- (void)setParseClass:(Class)arg1;

@end
