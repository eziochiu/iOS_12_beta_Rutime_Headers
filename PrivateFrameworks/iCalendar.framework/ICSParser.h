/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSParser : NSObject {
    NSData * _data;
    ICSTokenizer * _lexer;
    long long  _options;
}

@property (readonly) ICSTokenizer *lexer;

+ (id)entitiesFromNSData:(id)arg1 options:(long long)arg2;

- (void).cxx_destruct;
- (bool)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)lexer;
- (id)makeComponent:(char *)arg1;
- (void)parseComponent:(id)arg1;
- (id)parseData;
- (void)parseParameter:(id)arg1;
- (bool)parseProperty:(id)arg1;

@end
