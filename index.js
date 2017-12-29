import { Platform } from "react-native";
import LinearGradientIos from "./index.ios.js";
import LinearGradientAndroid from "./index.android.js";
import LinearGradientDesktop from "./index.desktop.js";

const LinearGradient = Platform.OS === "ios"
  ? LinearGradientIos
  : Platform.OS === "android" ? LinearGradientAndroid
                              : LinearGradientDesktop;

export default LinearGradient;
