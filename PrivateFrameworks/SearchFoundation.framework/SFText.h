/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFText : NSObject <NSCopying, NSSecureCoding, SFText> {
    struct { 
        unsigned int maxLines : 1; 
    }  _has;
    unsigned long long  _maxLines;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxLines;
@property (readonly) Class superclass;
@property (copy) NSString *text;

+ (bool)supportsSecureCoding;
+ (id)textWithString:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMaxLines;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (unsigned long long)length;
- (unsigned long long)maxLines;
- (void)setMaxLines:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
