/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (nonatomic) bool disabled;
@property (nonatomic, copy) NSString *frameId;
@property (nonatomic) bool isInline;
@property (nonatomic) long long origin;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic) double startColumn;
@property (nonatomic) double startLine;
@property (nonatomic, copy) NSString *styleSheetId;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (bool)disabled;
- (id)frameId;
- (id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(bool)arg6 isInline:(bool)arg7 startLine:(double)arg8 startColumn:(double)arg9;
- (bool)isInline;
- (long long)origin;
- (void)setDisabled:(bool)arg1;
- (void)setFrameId:(id)arg1;
- (void)setIsInline:(bool)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStartColumn:(double)arg1;
- (void)setStartLine:(double)arg1;
- (void)setStyleSheetId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceURL;
- (double)startColumn;
- (double)startLine;
- (id)styleSheetId;
- (id)title;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(bool)arg6 isInline:(bool)arg7 startLine:(double)arg8 startColumn:(double)arg9;

@end
