/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPText : NSObject {
    char * mContent;
}

- (const char *)content;
- (void)dealloc;
- (id)initWithContent:(const char *)arg1;
- (bool)isBlank;

@end
