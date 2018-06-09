/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSToken : NSObject {
    unsigned short  _charValue;
    double  _doubleValue;
    NSDictionary * _properties;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _stringValue;
    long long  _type;
}

@property (nonatomic) unsigned short charValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, retain) NSDictionary *properties;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (unsigned short)charValue;
- (id)description;
- (double)doubleValue;
- (id)initWithType:(long long)arg1;
- (id)properties;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCharValue:(unsigned short)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setProperties:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(long long)arg1;
- (id)stringValue;
- (long long)type;

@end
