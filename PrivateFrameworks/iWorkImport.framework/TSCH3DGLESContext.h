/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class EAGLContext;

@interface TSCH3DGLESContext : TSCH3DGLContext {
    EAGLContext *mContext;
}

+ (void)clearCurrentContext;
+ (bool)isCurrentContextValid;

- (id)bindReturningPreviousContext;
- (id)capabilitiesForExtensions:(id)arg1;
- (void)dealloc;
- (id)extensionsForCurrentVirtualScreen;
- (id)init;
- (bool)isBound;
- (void)present;
- (void)restoreEAGLContext:(id)arg1;
- (void)setVirtualScreen:(int)arg1;
- (int)virtualScreen;

@end