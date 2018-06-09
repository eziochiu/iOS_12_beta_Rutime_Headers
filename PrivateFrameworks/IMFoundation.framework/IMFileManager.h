/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileManager : NSFileManager

+ (id)defaultHFSFileManager;
+ (id)defaultManager;

- (id)MIMETypeOfPath:(id)arg1;
- (id)MIMETypeOfPathExtension:(id)arg1;
- (id)UTITypeOfMimeType:(id)arg1;
- (id)UTITypeOfPath:(id)arg1;
- (id)UTITypeOfPathExtension:(id)arg1;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2;
- (id)pathExtensionForMIMEType:(id)arg1;
- (id)pathExtensionForUTIType:(id)arg1;

@end
