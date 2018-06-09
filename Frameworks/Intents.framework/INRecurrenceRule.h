/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding> {
    long long  _frequency;
    unsigned long long  _interval;
}

@property (readonly) long long frequency;
@property (readonly) unsigned long long interval;

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)frequency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;

@end
