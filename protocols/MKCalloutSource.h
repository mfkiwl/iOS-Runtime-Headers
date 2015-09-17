/* Generated by RuntimeBrowser.
 */

@protocol MKCalloutSource <NSObject>

@required

- (struct CGPoint { float x1; float x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { float x1; float x2; })arg1 canvasScale:(float)arg2 snapToPixels:(BOOL)arg3;
- (NSString *)debugAnchorPointString;
- (struct CGPoint { float x1; float x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { float x1; float x2; })arg1 canvasScale:(float)arg2;
- (NSString *)title;

@optional

- (UIView *)detailCalloutAccessoryView;
- (UIView *)leftCalloutAccessoryView;
- (UIView *)rightCalloutAccessoryView;
- (NSString *)subtitle;

@end