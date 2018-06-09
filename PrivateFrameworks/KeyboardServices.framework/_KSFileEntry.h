/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSFileEntry : NSObject <NSSecureCoding> {
    NSMutableDictionary * _extendedAttributes;
    NSMutableArray * _fileArray;
    NSData * _fileBlob;
    NSString * _name;
    NSMutableArray * _tempFiles;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *extendedAttributes;
@property (nonatomic, readonly, retain) NSString *name;

+ (id)entryWithSerialisedDataAtURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)addBlobToFile:(id)arg1;
- (void)consistencyCheck;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)loadAttributesFromURL:(id)arg1;
- (id)name;
- (void)performOnEverything:(id /* block */)arg1;
- (void)restoreToPath:(id)arg1;
- (void)saveAttributesToURL:(id)arg1;
- (id)serialiseToTemporaryFile;
- (id)temporaryFileNameForType:(id)arg1;

@end
