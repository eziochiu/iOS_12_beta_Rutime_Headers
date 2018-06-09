/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEncodingDetectionPlaceholder : NSObject {
    char * bytes;
    unsigned long long  bytesLength;
    char * bytesStart;
    unsigned int  cfEncoding;
    unsigned long long  nsEncoding;
    NSString * string;
}

@property (readonly) char *bytes;
@property (readonly) unsigned long long bytesLength;
@property (readonly) unsigned int cfEncoding;
@property (readonly) unsigned long long nsEncoding;
@property (readonly) NSString *string;

+ (id)placeholderForDetector:(id)arg1;

- (char *)bytes;
- (unsigned long long)bytesLength;
- (unsigned int)cfEncoding;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)nsEncoding;
- (id)string;

@end
