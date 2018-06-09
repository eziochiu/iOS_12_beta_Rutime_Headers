/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFUserActivityInfo : NSObject <NSCopying, NSSecureCoding, SFUserActivityInfo> {
    struct { 
        unsigned int valueType : 1; 
    }  _has;
    NSString * _key;
    NSString * _stringValue;
    NSURL * _urlValue;
    int  _valueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *urlValue;
@property (nonatomic) int valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValueType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUrlValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (id)urlValue;
- (int)valueType;

@end
