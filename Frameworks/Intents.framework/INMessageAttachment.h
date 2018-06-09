/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INMessageAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _fileURL;
    NSString * _filename;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)filename;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilename:(id)arg1 type:(long long)arg2 fileURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
