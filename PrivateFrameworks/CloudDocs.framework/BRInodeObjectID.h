/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long  _ino;
}

+ (bool)supportsSecureCoding;

- (id)asString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1;
- (bool)isFolderOrAliasID;
- (unsigned long long)rawID;

@end
