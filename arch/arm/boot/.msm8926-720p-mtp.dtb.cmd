cmd_arch/arm/boot/msm8926-720p-mtp.dtb := /home/algesat/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/msm8926-720p-mtp.dtb -b 0  -d arch/arm/boot/.msm8926-720p-mtp.dtb.d arch/arm/boot/dts/msm8926-720p-mtp.dts

source_arch/arm/boot/msm8926-720p-mtp.dtb := arch/arm/boot/dts/msm8926-720p-mtp.dts

deps_arch/arm/boot/msm8926-720p-mtp.dtb := \
  arch/arm/boot/dts/msm8926.dtsi \
  arch/arm/boot/dts/msm8226.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/msm8226-ion.dtsi \
  arch/arm/boot/dts/msm8226-camera.dtsi \
  arch/arm/boot/dts/msm-gdsc.dtsi \
  arch/arm/boot/dts/msm8226-iommu.dtsi \
  arch/arm/boot/dts/msm-iommu-v1.dtsi \
  arch/arm/boot/dts/msm8226-smp2p.dtsi \
  arch/arm/boot/dts/msm8226-gpu.dtsi \
  arch/arm/boot/dts/msm8226-bus.dtsi \
  arch/arm/boot/dts/msm8226-mdss.dtsi \
  arch/arm/boot/dts/msm8226-mdss-panels.dtsi \
  arch/arm/boot/dts/dsi-panel-hx8394a-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35521-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35596-1080p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-720p-cmd.dtsi \
  arch/arm/boot/dts/dsi-panel-ssd2080m-720p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-jdi-1080p-video.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-CMI-IPS-4p5-FWVGA-video-zte-400.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-HSD-TN-4p5-FWVGA-video-zte-401.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-TM-TM-4p5-FWVGA-video-zte-402.dtsi \
  arch/arm/boot/dts/dsi-panel-NT35517-BOE-BOE-4p5-QHD-video-zte-403.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-cmi-5p0-720p-cmd-zte-301.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-auo-5p0-720p-cmd-zte-303.dtsi \
  arch/arm/boot/dts/dsi-panel-otm1283a-tm-5p0-720p-video-zte-700.dtsi \
  arch/arm/boot/dts/dsi-panel-hx8394d-hsd-5p0-720p-video-zte-701.dtsi \
  arch/arm/boot/dts/dsi-panel-zte-hsd-nt35512-4p0-wvga-video.dtsi \
  arch/arm/boot/dts/dsi-panel-zte-cpt-fl108802-4p0-wvga-video.dtsi \
  arch/arm/boot/dts/msm8226-coresight.dtsi \
  arch/arm/boot/dts/msm8226-iommu-domains.dtsi \
  arch/arm/boot/dts/msm-rdbg.dtsi \
  arch/arm/boot/dts/msm-pm8226-rpm-regulator.dtsi \
  arch/arm/boot/dts/msm-pm8226.dtsi \
  arch/arm/boot/dts/msm8226-regulator.dtsi \
  arch/arm/boot/dts/msm8226-v2-pm.dtsi \
  arch/arm/boot/dts/msm8226-720p-mtp.dtsi \
  arch/arm/boot/dts/msm8226-camera-sensor-mtp.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-CMI-IPS-4p5-FWVGA-video-zte-400.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-HSD-TN-4p5-FWVGA-video-zte-401.dtsi \
  arch/arm/boot/dts/dsi-panel-HX8379A-TM-TM-4p5-FWVGA-video-zte-402.dtsi \
  arch/arm/boot/dts/dsi-panel-NT35517-BOE-BOE-4p5-QHD-video-zte-403.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-cmi-5p0-720p-cmd-zte-301.dtsi \
  arch/arm/boot/dts/dsi-panel-nt35590-auo-5p0-720p-cmd-zte-303.dtsi \
  arch/arm/boot/dts/dsi-panel-nt51011-mjk-8p0-WXGA-video-zte-601.dtsi \
  arch/arm/boot/dts/dsi-panel-otm1283a-tm-5p0-720p-video-zte-700.dtsi \
  arch/arm/boot/dts/dsi-panel-hx8394d-hsd-5p0-720p-video-zte-701.dtsi \
  arch/arm/boot/dts/dsi-panel-zte-hsd-nt35512-4p0-wvga-video.dtsi \
  arch/arm/boot/dts/batterydata-zte-4v35-2000mah.dtsi \
  arch/arm/boot/dts/batterydata-zte-4v35-2300mah.dtsi \
  arch/arm/boot/dts/batterydata-zte-rd-gy-4v35-2300mah.dtsi \
  arch/arm/boot/dts/batterydata-zte-4v2-4000mah.dtsi \
  arch/arm/boot/dts/msm8226-camera-sensor-mtp.dtsi \

arch/arm/boot/msm8926-720p-mtp.dtb: $(deps_arch/arm/boot/msm8926-720p-mtp.dtb)

$(deps_arch/arm/boot/msm8926-720p-mtp.dtb):
