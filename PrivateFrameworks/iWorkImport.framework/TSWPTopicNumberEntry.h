/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTopicNumberEntry : NSObject <NSCopying> {
    unsigned long long  _charIndex;
    unsigned long long  _number;
}

@property (nonatomic) unsigned long long charIndex;
@property (nonatomic, readonly) unsigned long long number;

- (unsigned long long)charIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNumber:(unsigned long long)arg1 charIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)number;
- (void)setCharIndex:(unsigned long long)arg1;

@end
