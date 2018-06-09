/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookFile : NSObject {
    NSURL * _fileURL;
    NSString * _title;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 title:(id)arg2;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)title;

@end
