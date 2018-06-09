/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboardInfo : NSObject <NSCopying, NSSecureCoding> {
    NSFileHandle * _dataFile;
    long long  _dataSize;
    NSArray * _items;
    NSDictionary * _sandboxExtensions;
    NSString * _sharedDataPath;
}

@property (retain) NSFileHandle *dataFile;
@property long long dataSize;
@property (copy) NSArray *items;
@property (copy) NSDictionary *sandboxExtensions;
@property (copy) NSString *sharedDataPath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFile;
- (long long)dataSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)sandboxExtensions;
- (void)setDataFile:(id)arg1;
- (void)setDataSize:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setSandboxExtensions:(id)arg1;
- (void)setSharedDataPath:(id)arg1;
- (id)sharedDataPath;

@end
