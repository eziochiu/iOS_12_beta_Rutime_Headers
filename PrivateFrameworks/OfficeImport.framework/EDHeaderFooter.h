/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDHeaderFooter : NSObject {
    NSString * mFooterString;
    NSString * mHeaderString;
}

+ (id)headerFooter;

- (void)dealloc;
- (id)description;
- (id)footerString;
- (id)headerString;
- (void)setFooterString:(id)arg1;
- (void)setHeaderString:(id)arg1;

@end
