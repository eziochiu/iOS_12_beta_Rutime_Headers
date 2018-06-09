/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUDelimitedValuesParserProvider : NSObject {
    NSURL * _url;
}

@property (nonatomic, retain) NSURL *url;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (bool)isCSV;
- (void)setUrl:(id)arg1;
- (id)url;

@end
