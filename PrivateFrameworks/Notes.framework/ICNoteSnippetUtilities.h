/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICNoteSnippetUtilities : NSObject

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForTitleInContent:(id)arg1 truncated:(bool*)arg2;
+ (id)snippetAndTitleTrimCharacterSet;
+ (id)snippetForContent:(id)arg1;
+ (id)stringByRemovingTitle:(id)arg1 fromString:(id)arg2;
+ (id)titleForContent:(id)arg1 truncated:(bool*)arg2;

@end
